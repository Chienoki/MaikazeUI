/**/

#ifndef MKZ_FONT_H_
#define MKZ_FONT_H_

#include "base.h"
#include <fstream>

class FontSys
{
public:
    FontSys(stdstr ifont);
    void ShowFont(const char* istr, int ix, int iy, SDL_Renderer* iren);
    void ShowFontAutoPos(const char* istr, int ix, int iy, int iw, int ih, SDL_Renderer * iren);
    ~FontSys();

private:
    TTF_Font * font;
};

#endif // !MKZ_FONT_H_
