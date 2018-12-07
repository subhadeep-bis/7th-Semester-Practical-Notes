left(0,X,One,Two):-
    Two = X,
    One = [].
left(L,[H|Tail],One,Two):-
    L1 is L - 1,
    left(L1,Tail,OneTail,Two),
    One = [H|OneTail].

split(X,One,Two):-
    length(X,L),
	L1 is div(L,2),
    left(L1,X,One,Two).
