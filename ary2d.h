#ifndef INCLUDE_ARY2D
#define INCLUDE_ARY2D

#include <vector>
#include <stdexcept>

namespace kpn {

template<class T>
class Ary2d
{
    int height;
    int width;
    std::vector<std::vector<T>> data;
public:

    Ary2d(int height = 0, int width = 0) : width(width), height(height),
		data(height, std::vector<T>(width, T())) {
	}

    T& at(int row, int col) {
		if (!checkRange(row, col))
			throw std::out_of_range("Ary2d::at() out of range");
		return data[row][col];
	}

    const T& ref(int row, int col) const {
        if(!checkRange(row, col))
            throw std::out_of_range("Ary2d::ref() out of range");
        return data[row][col];
    }

    bool checkRange(int row, int col) const {
        return 0 <= row && row < height && 0 <= col && col < width;
    }

    int getHeight() const { return height; }
    int getWidth() const { return width; }

};

}

#endif

