// date: 2020-03-01
// desc: 复数测试类的头文件

// 防御式声明
#ifndef __COMPLEX__
#define __COMPLEX__

class complex
{
private:
    double re, im;

public:
    complex (double r = 0, double i = 0)
        : re (r), im (i)
    { }

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
};

#endif
