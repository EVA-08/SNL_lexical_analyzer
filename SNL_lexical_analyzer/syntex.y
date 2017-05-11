%{
 #define YYSTYPE Node*
 #include<iostream>
 #include"ast.hpp"
 #include"syntex.tab.h"
 
 Node* root;
 extern int yylex();
 void yyerror(char const*);
%}

%token ENDFILE
%token ERROR1
%token PROGRAM
%token PROCEDURE
%token TYPE
%token VAR
%token IF
%token THEN
%token ELSE
%token FI
%token WHILE
%token DO
%token ENDWH
%token BEGIN1
%token END1
%token READ
%token WRITE
%token ARRAY
%token OF
%token RECORD
%token RETURN1
%token INTEGER
%token CHAR1
%token ID
%token INTC
%token CHARC
%token ASSIGN
%token EQ
%token LT
%token PLUS
%token MINUS
%token TIMES
%token OVER
%token LPAREN
%token RPAREN
%token DOT
%token COLON
%token SEMI
%token COMMA
%token LMIDPAREN
%token RMIDPAREN
%token UNDERANGE

%%

Program: ProgramHead  DeclarePart  ProgramBody DOT 
		{$$ = new Parent("Program", $1, $2, $3, $4);
		 root = $$;											}

ProgramHead: PROGRAM ProgramName {$$ = new Parent("ProgramHead", $1, $2);}           
ProgramName: ID {$$ = new Parent("ProgramName", $1);}                                      

DeclarePart: TypeDecpart  VarDecpart  ProcDecpart {$$ = new Parent("DeclarePart", $1, $2, $3);}


TypeDecpart: /* empty */ {$$ = new Leaf("Empty");}
      	   | TypeDec {$$ = new Parent("TypeDecpart", $1);}         
TypeDec: TYPE TypeDecList {$$ = new Parent("TypeDec", $1, $2);}
TypeDecList: TypeId EQ TypeDef SEMI TypeDecMore  {$$ = new Parent("TypeDecList", $1, $2, $3);}
TypeDecMore: /* empty */ {$$ = new Leaf("Empty");}
           | TypeDecList {$$ = new Parent("TypeDecMore", $1);}             
TypeId: ID {$$ = new Parent("TypeId", $1);}        


TypeDef: BaseType {$$ = new Parent("TypeDef", $1);}     
       | StructureType {$$ = new Parent("TypeDef", $1);}     
       | ID {$$ = new Parent("TypeDef", $1);}                 

BaseType: INTEGER {$$ = new Parent("BaseType", $1);}        
        | CHAR1 {$$ = new Parent("BaseType", $1);}             

StructureType: ArrayType {$$ = new Parent("StructureType", $1);}       
             | RecType {$$ = new Parent("StructureType", $1);}        

ArrayType: ARRAY LMIDPAREN Low UNDERANGE Top RMIDPAREN OF BaseType
		   {$$ = new Parent("ArrayType", $1, $2, $3, $4, $5, $6, $7, $8);}   
Low: INTC {$$ = new Parent("Low", $1);}                            
Top: INTC {$$ = new Parent("Top", $1);}                         

RecType: RECORD  FieldDecList  END1 {$$ = new Parent("RecType", $1, $2, $3);}  
FieldDecList: BaseType  IdList SEMI FieldDecMore {$$ = new Parent("FieldDecList", $1, $2, $3);}                                                                                                                                            
            | ArrayType IdList SEMI FieldDecMore {$$ = new Parent("FieldDecList", $1, $2, $3);}     

FieldDecMore: /* empty */ {$$ = new Leaf("Empty");}
            | FieldDecList {$$ = new Parent("FieldDecMore", $1);}     
IdList: ID  IdMore {$$ = new Parent("IdList", $1, $2);}      
IdMore: /* empty */ {$$ = new Leaf("Empty");}
      | COMMA IdList {$$ = new Parent("IdMore", $1, $2);}


VarDecpart: /* empty */ {$$ = new Leaf("Empty");}
          | VarDec {$$ = new Parent("VarDecpart", $1);}
VarDec: VAR  VarDecList {$$ = new Parent("VarDec", $1, $2);}
VarDecList: TypeDef VarIdList SEMI VarDecMore {$$ = new Parent("VarDecList", $1, $2, $3, $4);}

VarDecMore: /* empty */ {$$ = new Leaf("Empty");}
          | VarDecList {$$ = new Parent("VarDecMore", $1);}
VarIdList: ID  VarIdMore {$$ = new Parent("VarIdeList", $1, $2);}
VarIdMore: /* empty */ {$$ = new Leaf("Empty");}
		 | COMMA VarIdList {$$ = new Parent("VarIdMore", $1, $2);}      


ProcDecpart: /* empty */ {$$ = new Leaf("Empty");}
           | ProcDec {$$ = new Parent("ProcDecpart", $1);}
ProcDec: PROCEDURE 
         ProcName LPAREN ParamList RPAREN  SEMI
    	   ProcDecPart 
         ProcBody
	   ProcDecMore {$$ = new Parent("ProcDec", $1, $2, $3, $4, $5, $6, $7, $8, $9);}

 ProcDecMore: /* empty */ {$$ = new Leaf("Empty");}
      		| ProcDec {$$ = new Parent("ProcDecMore", $1);}
 ProcName: ID  {$$ = new Parent("ProcName", $1);}
      

 ParamList: /* empty */ {$$ = new Leaf("Empty");}
          | ParamDecList {$$ = new Parent("ParamList", $1);}
ParamDecList: Param  ParamMore {$$ = new Parent("ParamDecList", $1, $2);}

ParamMore: /* empty */ {$$ = new Leaf("Empty");}
         | SEMI ParamDecList {$$ = new Parent("ParamMore", $1, $2);}
Param: TypeDef  FormList {$$ = new Parent("Param", $1, $2);}
     | VAR TypeDef  FormList  {$$ = new Parent("Param", $1, $2);}
FormList: ID  FidMore {$$ = new Parent("FormList", $1, $2);}     
FidMore: /* empty */ {$$ = new Leaf("Empty");}
       | COMMA FormList {$$ = new Parent("FidMore", $1, $2);}

ProcDecPart: DeclarePart  {$$ = new Parent("ProcDecPart", $1);}

ProcBody: ProgramBody {$$ = new Parent("ProgramBode", $1);}

ProgramBody: BEGIN1  StmList  END1 {$$ = new Parent("ProgramBody", $1, $2, $3);}

StmList: Stm  StmMore  {$$ = new Parent("StmList", $1, $2);}
StmMore: /* empty */ {$$ = new Leaf("Empty");}
       | SEMI  StmList {$$ = new Parent("StmMore", $1, $2);}

Stm: ConditionalStm {$$ = new Parent("Stm", $1);}
   | LoopStm {$$ = new Parent("Stm", $1);}
   | InputStm {$$ = new Parent("Stm", $1);}
   | OutputStm {$$ = new Parent("Stm", $1);}
   | ReturnStm {$$ = new Parent("Stm", $1);}
   | ID AssCall {$$ = new Parent("Stm", $1, $2);}

AssCall: AssignmentRest {$$ = new Parent("AssCall", $1);}
       | CallStmRest {$$ = new Parent("Asscall", $1);}    

AssignmentRest: VariMore ASSIGN Exp {$$ = new Parent("AssignmentRest", $1, $2, $3);}

ConditionalStm: IF RelExp THEN StmList ELSE StmList FI {
				$$ = new Parent("ConditionalStm", $1, $2, $3, $4, $5, $6, $7);}

LoopStm: WHILE  RelExp DO StmList ENDWH {$$ = new Parent("LoopStm", $1, $2, $3, $4, $5);}

InputStm: READ LPAREN Invar RPAREN {$$ = new Parent("InputStm", $1, $2, $3, $4);}
Invar: ID {$$ = new Parent("Invar", $1);}

OutputStm: WRITE LPAREN Exp RPAREN {$$ = new Parent("OutputStm", $1, $2, $3, $4);}

ReturnStm: RETURN1 {$$ = new Parent("ReturnStm", $1);}

CallStmRest: LPAREN ActParamList RPAREN {$$ = new Parent("CallStmRest", $1, $2, $3);}
ActParamList: /* empty */ {$$ = new Leaf("Empty");}
            | Exp  ActParamMore {$$ = new Parent("ActParamList", $1, $2);}
ActParamMore: /* empty */ {$$ = new Leaf("Empty");}
            | COMMA  ActParamList {$$ = new Parent("ActParamMore", $1, $2);}

RelExp: Exp  OtherRelE {$$ = new Parent("RelExp", $1, $2);}
OtherRelE: CmpOp   Exp {$$ = new Parent("OtherRelE", $1, $2);}

Exp: Term   OtherTerm {$$ = new Parent("Exp", $1, $2);}
OtherTerm: /* empty */ {$$ = new Leaf("Empty");}     
         | AddOp   Exp {$$ = new Parent("OtherTerm", $1, $2);}


Term: Factor   OtherFactor {$$ = new Parent("Term", $1, $2);}
OtherFactor: /* empty */ {$$ = new Leaf("Empty");}
           | MultOp  Term {$$ = new Parent("OtherFactor", $1, $2);}
  

Factor: LPAREN  Exp  RPAREN {$$ = new Parent("Factor", $1, $2, $3);}
      | INTC {$$ = new Parent("Factor", $1);}
      | Variable {$$ = new Parent("Factor", $1);}
Variable: ID   VariMore {$$ = new Parent("Variable", $1, $2);}
VariMore: /* empty */ {$$ = new Leaf("Empty");}
        | LMIDPAREN Exp RMIDPAREN {$$ = new Parent("VariMore", $1, $2, $3);}
        | DOT FieldVar {$$ = new Parent("VariMore", $1, $2);}
FieldVar: ID   FieldVarMore {$$ = new Parent("FieldVar", $1, $2);}
FieldVarMore: /* empty */ {$$ = new Leaf("Empty");}
            | LMIDPAREN Exp RMIDPAREN {$$ = new Parent("FieldVarMore", $1, $2, $3);}

CmpOp: LT {$$ = new Parent("CmpOp", $1);}
     | EQ {$$ = new Parent("CmpOp", $1);}

AddOp: PLUS {$$ = new Parent("AddOp", $1);}
     | MINUS {$$ = new Parent("AddOp", $1);}

MultOp: TIMES {$$ = new Parent("MultOp", $1);}
	  | OVER {$$ = new Parent("OVER", $1);}

%%

void yyerror (char const *s) {
   std::cout << "ERROR: " << s;
}

int main () {
	yyparse ();
	root->traversal(0);
	system("pause");  
}