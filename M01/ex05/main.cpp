#include "Harl.hpp"

int main(void)
{
    harl a;

    a.complain("warning");
    a.complain("debug");
    a.complain("error");
    a.complain("info");
    return (0);
}