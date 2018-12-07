gcd(X,X,X):- !.
gcd(X,Y,Z):-
    Y > X,
    gcd(Y,X,Z).
gcd(X,Y,Y):-
    K is mod(X,Y),
    K == 0, !.
gcd(X,Y,Z):-
    K is mod(X,Y),
    K \= 0, !,   
    gcd(Y,K,Z).
gcd_rec([],Temp,Temp).
gcd_rec([H|T], Temp, X):-
    gcd(H,Temp,Z),
    gcd_rec(T,Z,X).
gcd_list([H1, H2| T], X):-
    gcd(H1,H2,Z),
    gcd_rec(T,Z,X).
