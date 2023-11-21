NumDays operator++(NumDays const& num1, NumDays const& num2)
{
    return NumDays(num1.hours + num2.hours);
}
NumDays operator--(NumDays const& num1, NumDays const& num2)
{
    return NumDays(num1.hours + num2.hours);
}