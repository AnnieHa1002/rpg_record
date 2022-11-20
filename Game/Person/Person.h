#pragma once

#include "Job/Job.h"

#define NAME_SIZE 32

struct _tagPerson
{
	char strName[NAME_SIZE];
	char strJobName[NAME_SIZE];
	JOB p_Job;
	int p_HP;
	class Constitution;
};