grammar RepoKey;

key
   : '[' index '[' (parent_index | (parent_index (',' parent_index)*)) ']' ']'
   ;

index
   : INTEGER
   | range
   | mul_exp
   | sum_exp
   | reg_exp
   | magic_var
   ;

parent_index
   : INTEGER
   | range
   | mul_exp
   | sum_exp
   | reg_exp
   | magic_var
   ;

// INTEGER: '[5 [1]]'

INTEGER
   : '-'? ('0' | [1-9] [0-9]*)
   ;

// magic_var: special magic variable (e.g. for step number)

magic_var
   : 'N'
   ;

// mul_exp: '[5 [2 * 3]]'

mul_exp
   : (INTEGER | magic_var) (('*' | '/') (INTEGER | magic_var))*
   ;

// sum_exp: '[5 [3 - 2]]'

sum_exp
   : mul_exp (('+' | '-') mul_exp)*
   ;

// range: '[5 [1:3]]'

range
   : sum_exp ':' sum_exp
   | mul_exp ':' mul_exp
   ;

// reg_exp: only asterisk yet

reg_exp
   : '*'
   ;

// Whitespace handling for lexer

WS
   : [ \t\n\r]+ -> skip
   ;

