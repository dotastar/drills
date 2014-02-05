#import <Foundation/Foundation.h>

@interface Type1: NSObject
@property int i1, i2;
-(void) print;
-(void) set: (int) v1 and: (int) v2;
-(void) add: (Type1 *) t1;
@end

@interface Type2: NSObject
@property int i1, i2;
-(void) printVal;
-(void) set: (int) v1 and: (int) v2;
-(void) add: (Type2 *) t1;
@end

@implementation Type1

@synthesize i1, i2;

-(void) print
{
	printf("(%i, %i)", i1, i2);
}

-(void) set: (int) v1 and: (int) v2
{
	i1 = v1;
	i2 = v2;
}

-(void) add: (Type1 *) t1
{
	i1 += t1.i1;
	i2 += t1.i2;
}

@end

@implementation Type2

@synthesize i1, i2;

-(void) printVal
{
	printf("(%i, %i)", i1, i2);
}

-(void) set: (int) v1 and: (int) v2;
{
	i1 = v1;
	i2 = v2;
}

-(void) add: (Type2 *) t1
{
	i1 *= t1.i1;
	i2 *= t1.i2;
}

@end

int main()
{
	@autoreleasepool
	{
		id data;

		Type1 *t11 = [[Type1 alloc] init];
		Type1 *t12 = [[Type1 alloc] init];
		Type2 *t2 = [[Type2 alloc] init];

		data = t11;
		[data set: 1 and: 2];

		data = t12;
		[data set: 3 and: 4];

		[data add: t11];

		[data print];

		printf("\n");
	}

	return 0; 
}
