#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stack>

using namespace std;

/*
 Write the actual code to parse a regular expression including "*", 
 which stands for 0 or more previous characters, "+", which 
 stands for 1 or more previous characters, and ".", 
 which stands for 1 exact character
 */

bool isMatch(const char *s, const char *p) {
	assert(s && p);

	if (*p == 0)
		return *s == 0;

	if (*(p+1) != '*')
		return ((*p == '.' && *s != 0) || *s == *p) && isMatch(s+1, p+1);

	const char* q = s;
	while ((*p == '.' || *p == *q) && *q != 0)
	{
		if (isMatch(q, p+2))
			return true;
		q++;
	}

	return isMatch(q, p+2);
}

bool is_match(const char *s, const char *p)
{
	assert(s);
	assert(p);

	if (*p == 0)
		return (*s == 0);

	if (*(p+1) != '*')
		return (*p == *s || (*p == '.' && *s)) && is_match(s+1, p+1);

	if (is_match(s, p+2))
		return true;

	if (*p == *s || (*p == '.' && *s))
		return (is_match(s+1, p+2) || is_match(s+1, p));

	return false;
}

bool is_match_v2(const char *s, const char *p)
{
	assert(s);
	assert(p);

	if (*p == 0)
		return (*s == 0);

	switch (*(p+1)) {
		case '*':
			if (is_match(s, p+2))
				return true;
			// fall thru
		case '+':
			if (*p == *s || (*p == '.' && *s))
				return (is_match(s+1, p+2)
					|| is_match(s+1, p));
			break;
		default:
			if (*p == *s || (*p == '.' && *s))
				return is_match(s+1, p+1);
	}

	return false;
}

bool is_match_iter(const char *s, const char *p)
{
	stack<pair<const char *, const char *> > retry;

	for (;;) {
		if (*p == 0) {
			if (*s == 0)
				return true;
			// else find retry point
		}
		else if (*(p+1) == '+') {
			if (*p == *s || (*p == '.' && *s)) {
				retry.push(make_pair(p, s+1));
				p += 2;
				s += 1;
				continue;
			}
		}
		else if (*(p+1) == '*') {
			retry.push(make_pair(p, s));
			p += 2;
			continue;
		}
		else if (*p == *s || (*p == '.' && *s)) {
			p += 1;
			s += 1;
			continue;
		}

		bool fvr = false; // found viable retry point
		while (!retry.empty() && !fvr) {
			p = retry.top().first;
			s = retry.top().second;
			retry.pop();
			if (*p == *s || (*p == '.' && *s)) {
				retry.push(make_pair(p, s+1));
				p += 2;
				s += 1;
				fvr = true;
			}
		}

		if (!fvr)
			return false;
	}

	assert(0);
	return false;
}

int main(int argc, char *argv[])
{
	if (argc < 3) {
		exit(1);
	}

	if (is_match_iter(argv[2], argv[1])) {
		printf("->Match!\n");
	}
	else {
		printf("->No match!\n");
	}

	return 0;
}

