typedef struct _node
{
    char item;
    struct _node *left;
    struct _node *right;
} t_node;

typedef struct
{
    t_node *root;
} t_tree;

t_node *create_node();
t_tree *create_root();
void print_pre_order(t_node *node);
void print_in_order(t_node *node);
void print_post_order(t_node *node);
void create_tree(t_node *node, char *input);
char *get_substring(char *input, int start_index, int size);
int get_string_size(char *string, int *i);
int is_valid(char *input);
int height(t_node *root);
