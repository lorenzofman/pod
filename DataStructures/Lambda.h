#ifndef LambdaH
#define LambdaH
#define lambda(return_type, function_body) \
	({ \
	 return_type __fn__ function_body \
	 __fn__; \
	 })

#endif // ! Lambda

