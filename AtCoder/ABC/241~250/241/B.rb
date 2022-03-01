N,M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)
check = Array.new(N, true)
M.times do |i|
  ok = false
  N.times do |j|
    if A[j] == B[i] && check[j]
      ok = true
      check[j] = false
      break
    end
  end
  unless ok
    puts 'No'
    exit 0
  end
end
puts 'Yes'
