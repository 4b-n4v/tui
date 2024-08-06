#include <ftxui/dom/elements.hpp>
#include <ftxui/dom/node.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

int main(void)
{
        using namespace ftxui;
        // auto screen = Screen::Create(Dimension::Full(), Dimension::Full());
        //
        //
        // auto &pixel = screen.PixelAt(9, 9);
        // pixel.character = U'A';
        // pixel.bold = true;
        // pixel.foreground_color = Color::Blue;
        //
        // std::cout << screen.ToString();
        Element document = vbox({text("The Window") | bold | color(Color::Blue),
                                 text("Scripts.com"),
                                 text("Bee Movie"),
                                 text("By Jerry Seinfeld"),

                                 text("NARRATOR:"),
                                 text("(Black screen with text; The sound of buzzing bees can be heard)"),
                                 text("According to all known laws"),
                                 text("of aviation,"),
                                 text(" :"),
                                 text("there is no way a bee"),
                                 text("should be able to fly."),
                                 text(":"),
                                 text("Its wings are too small to get"),
                                 text("its fat little body off the ground."),
                                 text(" :"),
                                 text("The bee, of course, flies anyway"),
                                 text(" :"),
                                 text("because bees don't care"),
                                 text("what humans think is impossible."),
                                 text("BARRY BENSON:"),
                                 text("(Barry is picking out a shirt)"),
                                 text("Yellow, black. Yellow, black."),
                                 text("Yellow, black. Yellow, black."),
                                 text(" :"),
                                 text("Ooh, black and yellow!"),
                                 text("Let's shake it up a little."),
                                 text("JANET BENSON:"),
                                 text("Barry! Breakfast is ready!"),
                                 text("BARRY:"),
                                 text("Coming!"),
                                 text(" :"),
                                 text("Hang on a second."),
                                 text("(Barry uses his antenna like a phone)"),
                                 text(" :"),
                                 text("Hello?"),
                                 text("ADAM FLAYMAN:"),
                                 text(""),
                                 text("(Through phone)"),
                                 text("- Barry?"),
                                 text("BARRY:"),
                                 text("- Adam?"),
                                 text("ADAM:"),
                                 text("- Can you believe this is happening?"),
                                 text("BARRY:"),
                                 text("- I can't. I'll pick you up."),
                                 text("(Barry flies down the stairs)"),
                                 text(" :"),
                                 text("MARTIN BENSON:"),
                                 text("Looking sharp."),
                                 text("JANET:"),
                                 text("Use the stairs. Your father"),
                                 text("paid good money for those."),
                                 text("BARRY:"),
                                 text("Sorry. I'm excited."),
                                 text("MARTIN:"),
                                 text("Here's the graduate."),
                                 text("We're very proud of you, son."),
                                 text(" :"),
                                 text("A perfect report card, all B's."),
                                 text("JANET:"),
                                 text("Very proud."),
                                 text("(Rubs Barry's hair)"),
                                 text("BARRY="),
                                 text("Ma! I got a thing going here."),
                                 text("JANET:"),
                                 text("- You got lint on your fuzz."),
                                 text("BARRY:"),
                                 text("- Ow! That's me!"),
                                 text(""),
                                 text("JANET:"),
                                 text("- Wave to us! We'll be in row 118,000."),
                                 text("- Bye!"),
                                 text("(Barry flies out the door)"),
                                 text("JANET:"),
                                 text("Barry, I told you,"),
                                 text("stop flying in the house!"),
                                 text("(Barry drives through the hive,and is waved at by Adam who is reading a"),
                                 text("newspaper)"),
                                 text("BARRY=="),
                                 text("- Hey, Adam."),
                                 text("ADAM:"),
                                 text("- Hey, Barry."),
                                 text("(Adam gets in Barry's car)"),
                                 text(" :"),
                                 text("- Is that fuzz gel?"),
                                 text("BARRY:"),
                                 text("- A little. Special day, graduation."),
                                 text("ADAM:"),
                                 text("Never thought I'd make it."),
                                 text("(Barry pulls away from the house and continues driving)"),
                                 text("BARRY:"),
                                 text("Three days grade school,"),
                                 text("three days high school..."),
                                 text("ADAM:"),
                                 text("Those were awkward."),
                                 text("BARRY:"),
                                 text("Three days college. I'm glad I took"),
                                 text("a day and hitchhiked around the hive."),
                                 text("ADAM=="),
                                 text("You did come back different."),
                                 text("(Barry and Adam pass by Artie, who is jogging)"),
                                 text("ARTIE:"),
                                 text("- Hi, Barry!"),
                                 text(""),
                                 text("BARRY:"),
                                 text("- Artie, growing a mustache? Looks good."),
                                 text("ADAM:"),
                                 text("- Hear about Frankie?"),
                                 text("BARRY:"),
                                 gauge(0.5),
                                 text("The Footer")});

        // Add a border by calling the `ftxui::border` decorator function.

        document = border(document);
        document = document | border;
        document |= border;

        auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
        Render(screen, document);
        screen.Print();
        return EXIT_SUCCESS;
}
