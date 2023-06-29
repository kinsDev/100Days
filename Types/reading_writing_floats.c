/**
float           Single-precision floating-point
double          Double-precision floating-point
long double     Extended-precision floating-point

the conversion specifications %e, %f, and %g are used for
reading and writing single-precision floating-point numbers.

%e or %E - For scientific notation of floats.
%f - For float type.
%g or %G - For float type with the current precision.


When reading a value of type double, put the letter l in front of e, f, or g:
double d;
scanf("%lf", &d);

NB: Use l only in a scanf format string, not a printf string. In a
printf format string, the e, f, and g conversions can be used to write either
float or double values. (C99 legalizes the use of %le, %lf, and %lg in
calls of printf, although the 1 has no effect.)


When reading or writing a value of type long double, put the letter L in
front of e, f, or g:
long double Id;
scanf("%Lf", &ld);
printf ("%Lf", Id);
*/