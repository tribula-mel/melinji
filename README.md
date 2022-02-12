In my day to day work I tend to keep notes. In the beginning I used paper
for the purpose. This approach had one disadvantage being the searchability.
During my work stint at ADIT.de I moved to using plain old files for keeping
the notes. I would create a separate file for each day with the vim editor
and all notes were grouped by year, month and week number. This approach
improved searchability a lot. I could use the grep to search, but even this
approach had its shortcoming when number of files and information stored
became big, and then it was harder to come up with a meaningful grep search
phrases. Nevertheless, the idea evolved. I started tagging the individual
entries in a daily file. The idea was that instead of remembering how to
reach specific piece of information a generic tag could be used for the
grep search purpose. Overtime I developed number of the tags suitable for
my current work. Then I decided to move away from using the grep and do
everything inside the vim editor. In order to do that I relied on vim's
built in tags feature. And this is where melinji comes into story. It
takes a tag file as an input, the one that one would have all the tags
defined, the other input being the directory root for the notes. Melinji
then indexes all the notes taking into account the defined tags and
creates the vim tags file. With this approach one could search the notes
within the vim with the regular ctrl-] / ctrl-t key strokes.
