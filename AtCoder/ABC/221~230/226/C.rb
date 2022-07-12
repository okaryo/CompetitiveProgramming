N = gets.to_i
TKA = N.times.map {gets.split.map(&:to_i)}

ans = TKA[N-1][0] + TKA[0][0]
learned_waza = Array.new(N)
required_waza = TKA[N-1].slice(2..)

learn = lambda do |waza|
  if learned_waza[waza]
    return 0
  end

  required = TKA[waza][2..]
  total_time = TKA[waza][0]
  required.each do |r|
    total_time += learn.call(r-1)
  end

  learned_waza[waza] = true
  return total_time
end

puts learn.call(N-1)
