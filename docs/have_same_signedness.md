# `have_same_signedness<T, U>`

The `have_same_signedness` trait is templated on two parameters — `T` and `U` — and sets the trait's boolean `value` member to `true` if both `T` and `U` are *both* unsigned **or** are *both* signed.

## Usage

```c++
constexpr bool truthy { iron::have_same_signedness<int, long>::value }; // true
constexpr bool falsey { iron::have_same_signedness<unsigned int, short>::value }; // false
```