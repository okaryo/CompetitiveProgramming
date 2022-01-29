S = gets.chomp
a,b = gets.split.map(&:to_i)
sa = S[a-1]
sb = S[b-1]
t = S.dup
t[a-1] = sb
t[b-1] = sa
puts t
