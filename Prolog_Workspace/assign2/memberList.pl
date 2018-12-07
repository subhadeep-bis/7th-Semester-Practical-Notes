search(X, []) :- write("Not in List").
search(X, [H|T]) :-
    X == H,
    write("In List").
search(X, [H|T]):-
    X \= H,
    search(X, T).
