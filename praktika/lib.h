#pragma once

// a + b * i
// a - R, b - R
// i * i = -1

// (a + b * i) * (c + d * i) = a * c + a * d * i + b * c * i - b * d =
// = (a * c - b * d) + i * (a * d + b * c)
// (a + b * i) / (c + d * i) =
// ((a + b * i) * (c - d * i)) / ((c + d * i) * (c - d * i)) =
// ((a + b * i) * (c - d * i)) / (c * c - c * d * i + c * d * i - d * d * i * i) =
// ((a + b * i) * (c - d * i)) / (c * c + d * d)

class ComplexNumber
{
public:

    ComplexNumber conjugate() const;
    float modulusSquared() const;
    float argument() const;

    ComplexNumber add(const ComplexNumber& other) const;
    ComplexNumber subtract(const ComplexNumber& other) const;
    ComplexNumber multiply(const ComplexNumber& other) const;
    ComplexNumber divide(const ComplexNumber& other) const;

    void input();
    void output() const;

    float real_, imag_;
};