#include "lib.h"

#include <math.h>

#include <iostream>

ComplexNumber ComplexNumber::conjugate() const
{
    ComplexNumber result;

    result.real_ = real_;
    result.imag_ = -imag_;

    return result;
}

float ComplexNumber::modulusSquared() const
{
    return real_ * real_ + imag_ * imag_;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other) const
{
    ComplexNumber result;

    result.real_ = real_ + other.real_;
    result.imag_ = imag_ + other.imag_;

    return result;
}

ComplexNumber ComplexNumber::subtract(const ComplexNumber& other) const
{
    ComplexNumber result;

    result.real_ = real_ - other.real_;
    result.imag_ = imag_ - other.imag_;

    return result;
}

ComplexNumber ComplexNumber::multiply(const ComplexNumber& other) const
{
    ComplexNumber result;

    result.real_ = (real_ * other.real_) - (imag_ * other.imag_);
    result.imag_ = (real_ * other.imag_) + (imag_ * other.real_);

    return result;
}
// = (a * c - b * d) + i * (a * d + b * c)

float ComplexNumber::argument() const
{
    return atan2(imag_, real_) * 180.0f / 3.141926f;
}

void ComplexNumber::input()
{
    std::cin >> real_ >> imag_;
}

void ComplexNumber::output() const
{
    std::cout << real_ << " + i * " << imag_ << "\n";
}

ComplexNumber ComplexNumber::divide(const ComplexNumber& other) const
{
    float modulus = other.modulusSquared();

    // TODO: переделать через this
    ComplexNumber result;

    ComplexNumber otherConjugated = other.conjugate();

    result.real_ =
        (real_ * otherConjugated.real_)
        - (imag_ * otherConjugated.imag_);
    result.imag_ =
        (real_ * otherConjugated.imag_)
        + (imag_ * otherConjugated.real_);

    // TODO: Добавить проверку на деление на ноль

    result.real_ /= modulus;
    result.imag_ /= modulus;

    return result;
}