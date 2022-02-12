# History

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


# The notes file structure

During a day of work I tend to tackle different topics. Thus I try to group
the information that goes into a notes file into logical entries, each
conveying the relevant information. The very first line of each entry is
a subject line. I tend to keep it short and as meaningful as possible. This
subject line gets tagged with one or more tags, depending on the information
that would follow. An example notes file entry would look like:

```
-| github account information (MEL_ACCOUNT_INFO)

   user name: ttt
   password : ttt
```

The subject line doesn't have to start with the "-|" string, nor the tag
has to be in the brackets. I like to keep the tag at the end of the subject
line, and if there are more tags applicable I separate with the '/'.


# The melinji tag file structure

The melinji takes a tag file as an input, were all the user tags are defined.
At this stage of development this file has a very simple structure, each
line should have one tag defined. There are no comments allowed, or any other
formatting. The name of the tag file is not of importance, and the example
content could look like:

```
MEL_ACCOUNT_INFO
MEL_INFO
MEL_USE
MEL_BACKUP
```

# Important note

The vim's tag file has to be sorted. I do the sort inside vim with the following:

```vim
:1,%!sort
```
