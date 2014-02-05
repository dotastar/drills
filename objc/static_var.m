#import <Foundation/Foundation.h>

@interface StaticVar: NSObject

-(int) showCounter;

@end

@implementation StaticVar

-(int) showCounter
{
	static int theCounter = 0;
	++theCounter;
	return theCounter;
}

@end

int main()
{
	@autoreleasepool
	{
		StaticVar *sv1 = [[StaticVar alloc] init];
		StaticVar *sv2 = [[StaticVar alloc] init];
		printf("sv1 %i\n", [sv1 showCounter]); 
		printf("sv1 %i\n", [sv1 showCounter]); 
		printf("sv2 %i\n", [sv2 showCounter]); 
		printf("sv2 %i\n", [sv2 showCounter]); 
		printf("sv1 %i\n", [sv1 showCounter]); 
		printf("sv1 %i\n", [sv1 showCounter]); 
		printf("sv2 %i\n", [sv2 showCounter]); 
		printf("sv2 %i\n", [sv2 showCounter]); 
	}

	return 0;
}
