gcd(X,Y,Y):-
    K is mod(X,Y),
    K == 0.
gcd(X,Y,Z):-
    Y>X,
    gcd(Y,X,Z).
gcd(X,Y,Z):-
    K is mod(X,Y),
	K \= 0,
	gcd(Y,K,Z).
