selectionsort([],[]).
selectionsort([First|Rest], [Smallest|SortedList]) :-
smallest(Rest, First, Smallest),
remove([First|Rest], Smallest, NewList),
selectionsort(NewList, SortedList),!.
smallest([], Smallest,Smallest).
smallest([First|Rest], CurrSmallest, Smallest) :-
First < CurrSmallest, smallest(Rest, First, Smallest).
smallest([_|Rest], CurrSmallest, Smallest) :-
smallest(Rest, CurrSmallest, Smallest).
remove([], _, []).
remove([First|Rest], First, Rest).
remove([First|Rest], Element, [First|NewList]) :-
remove(Rest, Element, NewList).
