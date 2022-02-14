N = gets.to_i
A,B = (N-1).times.map{gets.split.map(&:to_i)}.transpose
ar = Array.new(N, 0)
(N-1).times do |i|
  ar[A[i]-1] += 1
  ar[B[i]-1] += 1
end
ar.each do |x|
  if x == N - 1
    puts 'Yes'
    exit 0
  end
end
puts 'No'
