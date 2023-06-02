#include <iostream>
#include "../headers/choices.hpp"
#include "../headers/choicesMonkey.hpp"
#include "../headers/storyParts.hpp"
#include "../headers/storyMonkey.hpp"
using namespace std;

void StoryMonkey::sendGameLvl(int level) {
     meetMonkey.saveGameLvl(level);
}

void StoryMonkey::printNarrative() {
    
    cout << "YOU: \"I didn't expect to meet a demon this early in my journey. Thank you for helping me out, DOG.\"" << endl << endl;

    cout << "DOG: \"It was nothing. I suppose it'd be best if we're always on our guard from here on out.\"" << endl << endl;

    cout << "Thus, with the encounter with a servant of darkness behind you, you and DOG went on your way." << endl
         << "Though somehow, en route to your destination, concerned citizens saw you two pass by their neighborhood — and they were understandably " << endl
         << "alarmed by your wounds and bruises. You ended up spending some time with them as they took their time to patch you two up." << endl << endl;

    // ADJUST MOMOTARO HEALTH
    // ADJUST DOG HEALTH

    cout << "YOU: \"It was nice of them to fix us up even if we didn't ask them to.\"" << endl << endl;

    cout << "DOG: \"I think they only did that because you told them we're on our way to fight the Demon King." << endl
         << "It seems like everyone in this village wants the demons gone as well.\"" << endl << endl;

    cout << "YOU: \"I can't blame them. The demons have been ruining the crops and killing livestock for far too long." << endl
         << "It's getting harder and harder for everyone to get by without enough money nor food.\"" << endl << endl;

    cout << "When you reached a river, DOG asked for your permission to drink as his throat had run dry from all the walking." << endl
         << "You, of course, obliged — not really one to pass up resting, even for just a moment." << endl << endl;
    
    cout << "Once more, you situated yourself under a shade. Without the sun on your face, you instantly felt the fatigue make itself known." << endl
         << "All of a sudden, the shade was inviting you to close your eyes and sleep. So you did." << endl << endl;

    cout << "However, before dreamland can even fully claim you, someone exclaimed…" << endl << endl;

    cout << "???: \"Son Goku!\"" << endl << endl;

    meetMonkey.question();

    cout << "A curious pair of eyes looked back at you. The sparkle of excitement behind them ultimately faded as seconds ticked by," << endl
         << "presumably once their owner realized that you weren't who it initially thought you were." << endl << endl;

    cout << "MONKEY: \"Wait… You're not Son Goku…\"" << endl << endl;

    cout << "YOU: \"I am not. Though some refer to me as Momotaro, without bothering to know" << endl
         << "the name my parents bestowed upon me, just because I was born from a peach.\"" << endl << endl;

    cout << "MONKEY: \"You're the child born from a peach?! Wow, I never thought I'd see you in the flesh! "
         << "Please forgive me for mistaking you as someone else.\"" << endl << endl;

    cout << "YOU: \"It's alright. Why were you looking for this Son Goku, anyway?\"" << endl << endl;

    cout << "MONKEY: \"The demons have taken every fruit they've seen. I've got nothing to eat. I was hoping Son Goku can help me make them go away.\"" << endl << endl;

    cout << "YOU: \"Ah, I know what you feel. I'm actually on my way to the Demon King's lair, to end this suffering once and for all.\"" << endl << endl;

    cout << "MONKEY: \"Really? Then perhaps, Son Goku sent you my way for a reason.\"" << endl << endl;

    cout << "Before you can comment on the connection it made, you heard a stomach rumble." << endl
         << "The people that patched you and DOG up fed you both, so you knew the sound could not have been from yours." << endl << endl;

    meetMonkey.question();

    cout << "MONKEY: \"I'd be glad to. I can't just ignore the will of Son Goku, obviously.\"" << endl << endl;
    
    // ADJUST AVAILABLE COMPANIONS

    cout << "You introduced MONKEY and DOG to each other once the latter was done drinking from the nearby river." << endl
         << "They did not seem to like each other, but miraculously managed to keep their cool for the sake of a common cause." << endl << endl;

     cout << "Before you could continue your journey again, however, the air around you suddenly felt colder." << endl
          << "Not that you mind the sudden drop in temperature, since it would make your travel easier without the sun shining" << endl
          << "fiercely upon you, but you knew the coldness of the air could not have been for a good reason." << endl << endl;

     cout << "You did not want to turn your head, as you already had a feeling what exactly prompted the unusual change." << endl
          << "Unfortunately, your eyes gravitated toward the source anyway — turning your head against your will." << endl << endl;
     
     cout << "And, sure enough, you locked eyes with a demon." << endl << endl;

     cout << "A chill went down your spine as the demon's figure moved closer to where you were standing." << endl
          << "Your fear was still there, but with both DOG and MONKEY next to you… you felt a little braver this time." << endl
          << "As such, you barely even flinched when the demon bared its teeth threateningly before charging." << endl << endl;
}