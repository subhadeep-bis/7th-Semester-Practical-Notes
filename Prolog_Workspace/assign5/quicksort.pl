quicksort([],[]).
quicksort([A],[A]).
quicksort([A|R],S):-
partition(A,R,L1,L2),
 quicksort(L1,S1),
 quicksort(L2,S2),
 append(S1,[A|S2],S).
partition(_,[],[],[]).
partition(A, [T|R], [T|R1], L2):-
 A >= T, !,
 partition(A,R,R1,L2).
partition(A, [T|R], L1, [T|R2]):-
 A < T, !,
 partition(A,R,L1,R2).
