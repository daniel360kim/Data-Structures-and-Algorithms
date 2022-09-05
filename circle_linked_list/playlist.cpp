#include "circle_linked_list.hpp"

#include <string>

int main(int argc, char const *argv[])
{
    CircleList<std::string> playlist;

    playlist.add("The Dark Side of the Moon"); //[The Dark Side of the Moon*]
    playlist.add("Wish You Were Here"); //[Wish You Were Here, The Dark Side of the Moon*]
    playlist.add("Animals"); //[Animals, Wish You Were Here, The Dark Side of the Moon*]

    playlist.advance(); //[Wish You Were Here, The Dark Side of the Moon, Animals*]
    playlist.advance(); //[The Dark Side of the Moon, Animals, Wish You Were Here*]
    playlist.remove(); //[Animals, Wish You Were Here*]

    playlist.add("The Wall"); //[The Wall, Animals, Wish You Were Here*]
    return 0;
}
