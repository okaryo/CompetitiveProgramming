S = gets.chomp
T = gets.chomp
l = S.size
ans = 'No'
if S == T
  ans = 'Yes'
end
1.upto(l-1) do |i|
  S[i-1],S[i] = S[i],S[i-1]
  if S == T
    ans = 'Yes'
  end
  S[i-1],S[i] = S[i],S[i-1]
end
puts ans
