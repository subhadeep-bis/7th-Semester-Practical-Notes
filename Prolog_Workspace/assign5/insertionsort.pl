inssort([],[]).
inssort([A],[A]).
inssort([A|R],S):-
inssort(R,S1),
 insertion(A,S1,S).
insertion(A,[],[A]).
insertion(A,[H|T],[A,H|T]):-
 A =< H, !.
insertion(A,[H|T],[H|S1]):-
 A > H, !,
 insertion(A,T,S1).