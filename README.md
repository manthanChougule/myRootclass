# myRootclass 
contains root finding methods like: fixed_point Method, newtonRaphson Method, Bisection Method.
         Input is taken from Input_[Method_name].txt
         for fixed point input file contains initial value, allowed error. (separated by space only)
         for newton Raphson input file contains initial value, allowed error. (separated by space only)
         for Bisection method input file changes littile, file contains initial values (two values: range of roots), allowed error. (separated by space only)

output is placed at output_[Method_name].txt
        it contains each step evalution till root is found,
        last Line has no of iterations required for finding the root and ans root.
         
         
fixed_point Method:   
                      in myRootclass.cpp -> function (**required**)
                      ( g of function of x -> g(x))                                             
    
newtonRaphson Method: 
                      in myRootclass.cpp -> function and dfucntion (**required**)
                      (function of x -> f(x)) (derivative  of function of x -> d(f(x))) 

Bisection Method:     
                      in myRootclass.cpp -> gfunction (**required**)
                      (function of x -> f(x))

to change the equation for finding the root you must change these:
                in myRootclass.cpp:
                                  change function's return statement as your function -> f(x)    
                                  change dfunction's return statement as your function -> d(x)   
                                  change gfunction's return statement as your function -> g(x)                                  
