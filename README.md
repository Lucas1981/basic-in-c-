# Basics in C++

<img width="796" alt="Screenshot 2024-01-07 at 11 42 46" src="https://github.com/Lucas1981/basics-in-cpp/assets/9882904/201b4792-19d5-4d50-8173-4d96b37362e7">

So this is generally just a continuation of exploring how easy it is to develop with new languages making use of ChatGPT as both a code generator and a learning resource. For learning it's also great, because it does things you don't understand and then when you ask for clarification, it will give you a detailed explanation. If you then try to summarize what was just explained bust still get it wrong, that will also be pointed out! It's kind of like having a great manual and tutorial a-la carte.

I've done this with C before (and probably will do this with C# as well), setting up basic gaming functionality. So far I haven't really set up a game with this yet though, where it's just the ability to read information about agents from a file and then render them to screen (basic green circles in this case), handling keyboard input - which is a hassle by the way on mac right now with permissions, and moving an agent around. Also timing animations right for movement I delved into a bit, so that uses a clock.

It's hard to choose either C or C++ for a job like this. Things are quicker and easier to set up in parts, like file reading. And of course the whole Object Oriented Programming paradigm makes a big difference, where agents are autonomous rather than having to be babysit struct instances with functions like you would have to do in C more. Not having to use `->` for references all the time is also nice. So yeah, in terms of separation of concerns it matters a lot. At the same time, especially if you're building raw games, C feels more... appropriate? I don't know, it's a feeling thing.

More stuff on next iterations I'd want to do though:
- Add more agents and actually have them do stuff
- Add animations functionality, using a flyweight image
- Add a linked-list to manage the agents
- Add a game state handler
- Add functionality to print text to the screen
- Add a grid system for the world environment
