/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Amichai Hadad,Yana Shayev
 * 
 * Date: 2020-02
 */
#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
TEST_CASE("Text of letters only"){
    string text = "v b g c s d o I A";
    CHECK(phonetic::find(text, "v").compare("v")==0);
    CHECK(phonetic::find(text, "V").compare("v")==0);
    CHECK(phonetic::find(text, "w").compare("v")==0);
    CHECK(phonetic::find(text, "W").compare("v")==0);
    CHECK(phonetic::find(text, "b").compare("b")==0);
    CHECK(phonetic::find(text, "B").compare("b")==0);
    CHECK(phonetic::find(text, "f").compare("b")==0);
    CHECK(phonetic::find(text, "F").compare("b")==0);
    CHECK(phonetic::find(text, "p").compare("b")==0);
    CHECK(phonetic::find(text, "P").compare("b")==0);
    CHECK(phonetic::find(text, "g").compare("g")==0);
    CHECK(phonetic::find(text, "G").compare("g")==0);
    CHECK(phonetic::find(text, "j").compare("g")==0);
    CHECK(phonetic::find(text, "J").compare("g")==0);
    CHECK(phonetic::find(text, "c").compare("c")==0);
    CHECK(phonetic::find(text, "C").compare("c")==0);
    CHECK(phonetic::find(text, "k").compare("c")==0);
    CHECK(phonetic::find(text, "K").compare("c")==0);
    CHECK(phonetic::find(text, "q").compare("c")==0);
    CHECK(phonetic::find(text, "Q").compare("c")==0);
    CHECK(phonetic::find(text, "s").compare("s")==0);
    CHECK(phonetic::find(text, "S").compare("s")==0);
    CHECK(phonetic::find(text, "z").compare("s")==0);
    CHECK(phonetic::find(text, "Z").compare("s")==0);
    CHECK(phonetic::find(text, "d").compare("d")==0);
    CHECK(phonetic::find(text, "D").compare("d")==0);
    CHECK(phonetic::find(text, "t").compare("d")==0);
    CHECK(phonetic::find(text, "T").compare("d")==0);
    CHECK(phonetic::find(text, "o").compare("o")==0);
    CHECK(phonetic::find(text, "O").compare("o")==0);
    CHECK(phonetic::find(text, "u").compare("o")==0);
    CHECK(phonetic::find(text, "U").compare("o")==0);
    CHECK(phonetic::find(text, "i").compare("I")==0);
    CHECK(phonetic::find(text, "I").compare("I")==0);
    CHECK(phonetic::find(text, "y").compare("I")==0);
    CHECK(phonetic::find(text, "Y").compare("I")==0);
    CHECK(phonetic::find(text, "a").compare("A")==0);
    CHECK(phonetic::find(text, "A").compare("A")==0);
    string text3 = "q w e r t y u p H j k l z X n";
    CHECK(phonetic::find(text3, "q").compare("q")==0);
    CHECK(phonetic::find(text3, "Q").compare("q")==0);
    CHECK(phonetic::find(text3, "K").compare("q")==0);
    CHECK(phonetic::find(text3, "k").compare("q")==0);
    CHECK(phonetic::find(text3, "w").compare("w")==0);
    CHECK(phonetic::find(text3, "W").compare("w")==0);
    CHECK(phonetic::find(text3, "v").compare("w")==0);
    CHECK(phonetic::find(text3, "V").compare("w")==0);
    CHECK(phonetic::find(text3, "e").compare("e")==0);
    CHECK(phonetic::find(text3, "E").compare("e")==0);
    CHECK(phonetic::find(text3, "t").compare("t")==0);
    CHECK(phonetic::find(text3, "T").compare("t")==0);
    CHECK(phonetic::find(text3, "d").compare("t")==0);
    CHECK(phonetic::find(text3, "D").compare("t")==0);
    CHECK(phonetic::find(text3, "y").compare("y")==0);
    CHECK(phonetic::find(text3, "Y").compare("y")==0);
    CHECK(phonetic::find(text3, "i").compare("y")==0);
    CHECK(phonetic::find(text3, "I").compare("y")==0);
    CHECK(phonetic::find(text3, "u").compare("u")==0);
    CHECK(phonetic::find(text3, "U").compare("u")==0);
    CHECK(phonetic::find(text3, "o").compare("u")==0);
    CHECK(phonetic::find(text3, "O").compare("u")==0);
    CHECK(phonetic::find(text3, "p").compare("p")==0);
    CHECK(phonetic::find(text3, "P").compare("p")==0);
    CHECK(phonetic::find(text3, "f").compare("p")==0);
    CHECK(phonetic::find(text3, "F").compare("p")==0);
    CHECK(phonetic::find(text3, "h").compare("H")==0);
    CHECK(phonetic::find(text3, "H").compare("H")==0);
    CHECK(phonetic::find(text3, "z").compare("z")==0);
    CHECK(phonetic::find(text3, "s").compare("z")==0);
    CHECK(phonetic::find(text3, "Z").compare("z")==0);
    CHECK(phonetic::find(text3, "S").compare("z")==0);
    CHECK(phonetic::find(text3, "j").compare("j")==0);
    CHECK(phonetic::find(text3, "G").compare("j")==0);
    CHECK(phonetic::find(text3, "g").compare("j")==0);
    CHECK(phonetic::find(text3, "J").compare("j")==0);
    CHECK(phonetic::find(text3, "r").compare("r")==0);
    CHECK(phonetic::find(text3, "R").compare("r")==0);
    CHECK(phonetic::find(text3, "k").compare("k")==0);
    CHECK(phonetic::find(text3, "K").compare("k")==0);
    CHECK(phonetic::find(text3, "c").compare("k")==0);
    CHECK(phonetic::find(text3, "C").compare("k")==0);
    CHECK(phonetic::find(text3, "q").compare("k")==0);
    CHECK(phonetic::find(text3, "Q").compare("k")==0);
    CHECK(phonetic::find(text3, "l").compare("l")==0);
    CHECK(phonetic::find(text3, "L").compare("l")==0);
    CHECK(phonetic::find(text3, "x").compare("X")==0);
    CHECK(phonetic::find(text3, "X").compare("X")==0);
    CHECK(phonetic::find(text3, "n").compare("n")==0);
    CHECK(phonetic::find(text3, "N").compare("n")==0);
}
TEST_CASE("full text"){
    string text2 = "My NaMe is Lior huw are yuu dutai";
    CHECK(phonetic::find(text2, "today").compare("dutai")==0);
    CHECK(phonetic::find(text2, "how").compare("huw")==0);
    CHECK(phonetic::find(text2, "is").compare("is")==0);
    CHECK(phonetic::find(text2, "you").compare("yuu")==0);
    CHECK(phonetic::find(text2, "lior").compare("Lior")==0);
    CHECK(phonetic::find(text2, "name").compare("NaMe")==0);
    CHECK(phonetic::find(text2, "HOW").compare("huw")==0);
    CHECK(phonetic::find(text2, "ys").compare("is")==0);
    string text4 = "hy thyz ys a dexd dhad nudhynj yz ryjhd";
    CHECK(phonetic::find(text4, "is").compare("ys")==0);
    CHECK(phonetic::find(text4, "this").compare("thyz")==0);
    CHECK(phonetic::find(text4, "text").compare("dexd")==0);
    CHECK(phonetic::find(text4, "that").compare("dhad")==0);
    CHECK(phonetic::find(text4, "nothing").compare("nudhynj")==0);
    CHECK(phonetic::find(text4, "right").compare("ryjhd")==0);
}
