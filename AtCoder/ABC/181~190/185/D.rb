N,M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i).sort
if M == 0
  puts(1)
  exit 0
end
white = []
M.times do |i|
  if i == 0
    d = A[i] - 1
    white << A[i] - 1 if d > 0
  else
    d = A[i] - A[i-1] - 1
    white << (A[i] - A[i-1] - 1) if d > 0
  end
  if i == M-1
    white << N - A[i] if N - A[i] > 0
  end
end
min = white.min
ans = 0
white.each do |i|
  ans += (1.0 * i / min).ceil
end
puts(ans)
