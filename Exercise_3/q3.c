/**
 * Only one of the expressions ++i and i+ + is exactly the same as (i += l); which is it?
Justify your answer
*/

/**
 * The expression `i++` is not exactly the same as `(i += 1)`.

The `i++` expression is the post-increment operator, which increments the value of `i` by `1`, but it returns the original value of `i` before the increment. In other words, the value of `i` is incremented after it has been evaluated in the expression.

On the other hand, `(i += 1)` is a compound assignment expression that adds `1` to the value of `i` and assigns the result back to `i`. It returns the updated value of `i` after the increment.

While both `i++` and `(i += 1)` result in the value of `i` being incremented by `1`, they are not exactly the same because they have different return values. `i++` returns the original value of `i`, while `(i += 1)` returns the updated value of `i`.
*/