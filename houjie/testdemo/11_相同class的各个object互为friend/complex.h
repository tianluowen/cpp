// desc: 复数测试类的头文件

// 防御式声明
#ifndef __COMPLEX__
#define __COMPLEX__

#include <iostream>

class complex
{
private:
    double re, im;
    friend complex& __doapl(complex*, const complex&);

public:
    complex (double r = 0, double i = 0)
        : re(r), im(i)
    { }

    complex& operator += (const complex r)
    {
        return __doapl(this, r);
    }

    // 读值
    double real()
    const
    {
        return re;
    }
    double imag()
    const
    {
        return im;
    }

    int func(const complex& param)
    {
        return param.re + param.im;
    }
};

inline complex& __doapl(complex* ths, const complex& r)
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}

#endif
