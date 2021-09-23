N = gets.to_i
T,L,R = N.times.map do
  t,l,r = gets.split.map(&:to_i)
  if t == 2
    r -= 0.5
  elsif t == 3
    l += 0.5
  elsif t == 4
    l += 0.5
    r -= 0.5
  end
  [t, l, r]
end.transpose
ans = 0
N.times do |i|
  (i+1).upto(N-1) do |j|
    ans += 1 if [L[i], L[j]].max <= [R[i], R[j]].min
  end
end
puts ans
