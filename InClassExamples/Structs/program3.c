
#include <stdio.h>

#define SIZE 50

typedef struct myobj {
    int data1;
    char str[SIZE];
} myobject_t;

// NOTE: This is an alternative way to declare a struct
struct mystruct {
    int data;
    double other_data;
};
typedef struct mystruct mystruct_t;

// Method 1: output parameter
void scan_obj( myobject_t * obj );
// Method 2: return type
myobject_t get_obj(void);

void print_obj( myobject_t obj );


int main(void)
{
    printf("Scan an object using scan_obj\n");
    myobject_t o;
    scan_obj( &o );
    print_obj( o );

    printf("Scan an object using get_obj\n");
    //myobj o2;  // ERROR: need keyword 'struct' or typedef name myobject_t
    struct myobj o2 = get_obj();
    print_obj( o2 );

    return 0;
}

void scan_obj( myobject_t * obj )
{
    scanf("%d %s", &obj->data1, obj->str );
}


myobject_t get_obj(void)
{
    myobject_t local_object;

    scanf("%d %s", &local_object.data1, local_object.str);

    return local_object;
}



void print_obj( myobject_t obj )
{
    printf("object: %d %s \n", obj.data1, obj.str );
}





