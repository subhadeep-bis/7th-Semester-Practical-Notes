allInt(X) :- allInt(1,X).

allInt(X,X) :- write(X).
allInt(X,Y):- X>Y.
allInt(X,Y):-
    X<Y,
    write(X),
    write(", "),
    X1 is X + 1,
    allInt(X1, Y).
