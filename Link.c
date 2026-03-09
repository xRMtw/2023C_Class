typedef struct node {
    struct node *prev;
    
} node_t;

struct listnode {
    node_t node;
    int data;
};

struct listnode *prt; 