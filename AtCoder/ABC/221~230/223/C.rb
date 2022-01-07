N = gets.to_i
A,B = N.times.map{gets.split.map(&:to_f)}.transpose
net_time = 0.0
N.times do |i|
  net_time += A[i] / B[i]
end
mid = net_time / 2
t_m = 0.0
t_l = 0
N.times do |i|
  if t_m + A[i] / B[i] >= mid
    r = mid - t_m
    l = r * B[i]
    puts t_l + l
    exit 0
  end

  t_m += A[i] / B[i]
  t_l += A[i]
end
