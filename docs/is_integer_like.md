# `is_integral_like<T>`

The `is_integral_like` trait is parameterized on type `T`, and sets the boolean `value` member to `true` if `T` is "integral-like". In other words, if `T` is either a built-in integer or if it *behaves* as one.

The intent of `is_integral_like` is that it be specialized on user-defined wrapped integer types, or any type that is expected to behave similarly enough to the fundamental integer types to meet some arbitrary criteria for "integral-like".