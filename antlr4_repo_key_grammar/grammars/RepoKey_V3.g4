grammar RepoKey;

key
   : '[' index '[' list_of_parent_indexes ']' ']'
   ;

atom : INTEGER | magic_var;

index
   : atom
   | range
   | list
   | expr
   | reg_exp
   ;

list_of_parent_indexes
   : (index | (index (',' index)*))
   ;

// INTEGER: '[5 [1]]'

INTEGER
   : '-'? ('0' | [1-9] [0-9]*)
   ;

// magic_var: special magic variable (e.g. for step number)

magic_var
   : 'N'
   ;

// expr: '[5 [2 * 3 + 5 - (2 * 5)]]'

expr
   : '(' single_expr=expr ')'
   | left_mul_expr=expr op=('*' | '/') right_mul_exp=expr
   | left_sum_expr=expr op=('+' | '-') right_sum_exp=expr
   | single_operand=atom
   ;

// range: '[5 [1..3]]'

range
   : left=expr '.''.' right=expr
   ;

// list: {1,3,5}
list
   : '{' expr (',' expr)* '}'
   ;

// reg_exp: only asterisk yet

reg_exp
   : '*'
   ;

// Whitespace handling for lexer

WS
   : [ \t\n\r]+ -> skip
   ;

