#ifndef __OBJECTS_H
#define __OBJECTS_H

#define MAX_FILE_NAME_SIZE (128)
#define MAX_TAG_NAME_SIZE (128)

typedef struct file_object {
   struct file_object *next;
   char file_name[MAX_FILE_NAME_SIZE];
} file_object_t;

typedef struct tags_object {
   struct tags_object *next;
   char tag_name[MAX_TAG_NAME_SIZE];
} tags_object_t;

#endif // __OBJECTS_H
