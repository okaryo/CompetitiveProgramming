# TLE (ToT)
N = gets.to_i
A = gets.split.map(&:to_i)
ans = 0
N.times do |l|
  x = A[l]
  l.upto(N-1) do |r|
    x = [x, A[r]].min
    ans = [ans, (r-l+1)*x].max
  end
end
puts(ans)
