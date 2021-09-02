N,Q = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
cnt = []
N.times do |i|
  cnt << A[i] - 1 - i
end
Q.times do
  k = gets.to_i
  if k > cnt.last
    puts(A.last + k - c.last)
  else
  end
end
