enum filenames 
{   
    input_fixedPoint = 0,
    input_bisection = 1,
    input_newtonRaphson = 2
};

class myRootclass
{
private:
    /* data */
    // float a, allowed_error;
    float a, b, allowed_error, mid_point;
    // float a, allowed_error;
public:
    // myRootclass();
    float function(const float x);  // cosx-x = 0
	float dfunction(const float x); // -1-sinx
    float gfunction(const float x); // g(x) = cosx -> y=x
    // float function(const float x);
	int fixedpoint_method();
    int bisection_method();
    int newtonRaphson_method();
    void input(char filename);
    // ~myRootclass();
};
