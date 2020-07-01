def solve(now_i, v)
  return v == 0 if now_i == N

  K.times do |i|
    if solve(now_i + 1, v ^ T[now_i][i])
      return true
    end
  end

  return false
end

N,K = gets.split.map(&:to_i)
T = N.times.map{gets.split.map(&:to_i)}

if solve(0, 0)
  puts 'Found'
else
  puts 'Nothing'
end
