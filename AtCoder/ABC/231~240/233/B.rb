L,R = gets.split.map(&:to_i)
S = gets.chomp
ans = ''
s = S[0, L - 1]
m = S[L - 1, R - L + 1].split('').reverse.join
e = S[R, S.size - R]
puts s + m + e
