%{
 #define YYSTYPE Node*
 #include<stdio.h>
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
%token RETURN
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

Program: ProgramHead  DeclarePart  ProgramBody DOT {$$ = new Parent("Program", $1, $2, $3, $4);}

ProgramHead: PROGRAM ProgramName {$$ = new Parent("ProgramHead", $1, $2);}           
ProgramName: ID {$$ = new Parent("ProgramName", $1);}                                      

DeclarePart: TypeDecpart  VarDecpart  ProcDecpart {$$ = new Parent("DeclarePart", $1, $2, $3);}


TypeDecpart: /* empty */
      	   | TypeDec {$$ = new Parent("TypeDecpart", $1);}         
TypeDec: TYPE TypeDecList {$$ = new Parent("TypeDec", $1, $2);}
TypeDecList: TypeId EQ TypeDef SEMI TypeDecMore  {$$ = new Parent("TypeDecList", $1, $2, $3);}
TypeDecMore: /* empty */
           | TypeDecList {$$ = new Parent("TypeDecMore", $1);}             
TypeId: ID {$$ = new Parent("TypeId", $1);}        


TypeDef: BaseType {$$ = new Parent("TypeDef", $1);}     
       | StructureType {$$ = new Parent("TypeDef", $1);}     
       | ID {$$ = new Parent("TypeDef", $1);}                 

BaseType: INTEGER {$$ = new Parent("BaseType", $1);}        
        | CHAR1 {$$ = new Parent("BaseType", $1);}             

StructureType: ArrayType {$$ = new Parent("StructureType", $1);}       
             | RecType {$$ = new Parent("StructureType", $1);}        

ArrayType: ARRAY LMIDPAREN Low UNDERANGE Top RMIDPAREN OF BaseType {$$ = new Parent("ArrayType", $1, $2, $3, $4, $5, $6, $7);}   
Low: INTC {$$ = new Parent("Low", $1);}                            
Top: INTC {$$ = new Parent("Top", $1);}                         

RecType: RECORD  FieldDecList  END1 {$$ = new Parent("RecType", $1, $2, $3);}  
FieldDecList: BaseType  IdList SEMI FieldDecMore {$$ = new Parent("FieldDecList", $1, $2, $3);}                                                                                                                                            
            | ArrayType IdList SEMI FieldDecMore {$$ = new Parent("FieldDecList", $1, $2, $3);}     

FieldDecMore: /* empty */
            | FieldDecList {$$ = new Parent("FieldDecMore", $1);}     
IdList: ID  IdMore {$$ = new Parent("IdList", $1, $2);}      
IdMore: /* empty */
      | COMMA IdList       


VarDecpart: /* empty */
          | VarDec       
VarDec: VAR  VarDecList       
VarDecList: TypeDef VarIdList SEMI VarDecMore

VarDecMore: /* empty */
          | VarDecList   
VarIdList: ID  VarIdMore      
VarIdMore: /* empty */
		 | COMMA VarIdList       


ProcDecpart: /* empty */
           | ProcDec      
ProcDec: PROCEDURE    
         ProcName LPAREN ParamList RPAREN  SEMI
    	   ProcDecPart 
         ProcBody
	   ProcDecMore 

 ProcDecMore: /* empty */
      		| ProcDec
 ProcName: ID  
      

 ParamList: /* empty */
          | ParamDecList  
ParamDecList: Param  ParamMore 

ParamMore: /* empty */
         | SEMI ParamDecList   
Param: TypeDef  FormList                         
     | VAR TypeDef  FormList   
FormList: ID  FidMore      
FidMore: /* empty */
       | COMMA FormList      

ProcDecPart: DeclarePart  

ProcBody: ProgramBody     

ProgramBody: BEGIN1  StmList  END1  

StmList: Stm  StmMore  
StmMore: /* empty */
       | SEMI  StmList      

Stm: ConditionalStm    
   | LoopStm    
   | InputStm    
   | OutputStm    
   | ReturnStm    
   | ID AssCall       

AssCall: AssignmentRest    
       | CallStmRest     

AssignmentRest: VariMore ASSIGN Exp    

ConditionalStm: IF RelExp THEN StmList ELSE StmList  FI                

LoopStm: WHILE  RelExp DO StmList ENDWH               

InputStm: READ LPAREN Invar RPAREN        
Invar: ID        

OutputStm: WRITE LPAREN Exp RPAREN    

ReturnStm: RETURN     

CallStmRest: LPAREN ActParamList RPAREN     
ActParamList: /* empty */
            | Exp  ActParamMore  
ActParamMore: /* empty */
            | COMMA  ActParamList      

RelExp: Exp  OtherRelE           
OtherRelE: CmpOp   Exp          

Exp: Term   OtherTerm     
OtherTerm: /* empty */     
         | AddOp   Exp       


Term: Factor   OtherFactor     
OtherFactor: /* empty */
           | MultOp  Term    
  

Factor: LPAREN  Exp  RPAREN       
      | INTC     
      | Variable      
Variable: ID   VariMore    
VariMore: /* empty */
        | LMIDPAREN Exp RMIDPAREN     
        | DOT FieldVar     
FieldVar: ID   FieldVarMore   
FieldVarMore: /* empty */
            | LMIDPAREN Exp RMIDPAREN     

CmpOp: LT     
     | EQ 

AddOp: PLUS 
     | MINUS

MultOp: TIMES
	  | OVER

%%

void yyerror (char const *s) {
  fprintf (stderr, "%s/n", s);
}

int main () {
	yyparse ();
	system("pause");  
}